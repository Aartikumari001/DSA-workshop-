#include <iostream>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, size, target);
    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found" << std::endl;
    return 0;
}


##############################################################################################################################

#include <iostream>
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

std::pair<int, int> findMinMax(const std::vector<int>& arr) {
    int min = *std::min_element(arr.begin(), arr.end());
    int max = *std::max_element(arr.begin(), arr.end());
    return std::make_pair(min, max);
}

std::pair<int, int> numberToFraction(int num) {
    return std::make_pair(num, 1);
}

int main() {
    std::vector<int> arr = {5, 10, 15, 20, 25};
    std::pair<int, int> minMax = findMinMax(arr);

    std::cout << "Minimum number: " << minMax.first << std::endl;
    std::cout << "Maximum number: " << minMax.second << std::endl;

    std::pair<int, int> minFraction = numberToFraction(minMax.first);
    std::pair<int, int> maxFraction = numberToFraction(minMax.second);

    std::cout << "Minimum fraction: " << minFraction.first << "/" << minFraction.second << std::endl;
    std::cout << "Maximum fraction: " << maxFraction.first << "/" << maxFraction.second << std::endl;

    int minGcd = gcd(minFraction.first, minFraction.second);
    int maxGcd = gcd(maxFraction.first, maxFraction.second);

    std::cout << "Simplified minimum fraction: " << minFraction.first / minGcd << "/" << minFraction.second / minGcd << std::endl;
    std::cout << "Simplified maximum fraction: " << maxFraction.first / maxGcd << "/" << maxFraction.second / maxGcd << std::endl;

    return 0;
}

##############################################################################################################################################################################

#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array using std::sort
    std::sort(arr, arr + size);

    // Printing the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
