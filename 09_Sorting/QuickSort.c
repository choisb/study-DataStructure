#include <stdio.h>

// arr[a], arr[b], arr[c] 중 중간값에 해당하는 index를 반환
int midIdx3(int arr[], int a, int b, int c)
{
	if (arr[a] >= arr[b])
		if (arr[b] >= arr[c])
			return b;
		else if (arr[a] <= arr[c])
			return a;
		else
			return c;

	else if (arr[a] >= arr[c])
		return a;
	else if (arr[b] >= arr[c])
		return c;
	else
		return b;			
}

void Swap(int arr[], int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(int arr[], int left, int right)
{
	int pivotIdx = midIdx3(arr, left, right, (int)(left + right) / 2);
	int pivot = arr[pivotIdx];	// 피벗의 위치는 가장 왼쪽!
	
	int low = left + 1;
	int high = right;

	printf("피벗: %d\n", pivot);
	   
	while (low <= high) // 교차하지 않았다면
	{
		while (pivot >= arr[low] && // low가 pivot보다 큰 수를 발견할 때까지 low++
			low <= high) // low는 high를 넘어서 탐색할 필요 없다.
			low++;

		while (pivot <= arr[high] && //high이 pivot보다 작은 수를 발견할 때까지 high--
			low <= high)// high는 low를 넘어서 탐색할 필요 없다.
			high--;

		if(low <= high)
			Swap(arr, low, high);
	}

	Swap(arr, pivotIdx, high); // 피벗과 high이 가리키는 대상 교환, high은 항상 pivot보다 작은 값을 보장함.
	return high; // 옮겨진 피벗의 위치정보 반환
}

void QuickSort(int arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);	// 둘로 나눠서
		QuickSort(arr, left, pivot - 1);			// 왼쪽 영역을 정렬
		QuickSort(arr, pivot + 1, right);			// 오른쪽 영역을 정렬
	}
}
int main(void)
{
	int arr[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int len = sizeof(arr) / sizeof(int);
	int i;

	QuickSort(arr, 0, len - 1);

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}