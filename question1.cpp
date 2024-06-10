#include <iostream>
using namespace std;
// let T be testcases 
// let N be numDishes
// let K be numCatogeries



int main() {
    int testcases;
    int numDishes, numCatogeries;
    int categories[] = {0};
    int timeToCook[] = {0};
    int minTime;
    cin >> testcases;
    while (testcases > 0) {
        cin >> numDishes >> numCatogeries;
        for (int i = 0; i < numDishes; i++) {
            cin >> categories[i];
        } 
        for (int i = 0; i < numDishes; i++) {
            cin >> timeToCook[i];
        } 

        for (int i = 0; i < numCatogeries; i++) {
            minTime = timeToCook[i];
            for (int j = 0; j < numDishes; j++) {
                if (categories[j] == i) {
                    if (timeToCook[j] < minTime) {
                        minTime = timeToCook[j];
                    }
                }
            }
            cout << minTime << " ";
        }
        testcases--;
    }
   
}