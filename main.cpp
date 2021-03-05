#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int sum_of_even_numbers;

    for(int index = 0; index < 10; index++){
        cout << "Enter " << index + 1 << " value" << endl;
        cin >> arr[index];
    }

    for(int index = 0; index < 10; index++){
        if(arr[index] % 2 == 0){
            sum_of_even_numbers += arr[index];
        }
    }

    for(int index = 0; index < 10; index++){
        cout << "Original array value : " << arr[index] << endl;
    }

    cout << "The sum of the even numbers in the array are: " << sum_of_even_numbers << endl;

    return 0;
}
