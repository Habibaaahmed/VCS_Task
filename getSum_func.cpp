double getAverage(const std::vector<int>& numbers) {
    int sum = getSum(numbers);
    return static_cast<double>(sum) / numbers.size();
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(numbers);
    double average = getAverage(numbers);
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Average of numbers: " << average << std::endl;
    return 0;
}
