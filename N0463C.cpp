#include <iostream>
#include <vector>
//#define EQUAL
unsigned short MIN_BUCKETS = 100;
const double BUCKET_SIZE = 0.05; //of the total range of the data
unsigned int m, n;
unsigned int current_size = 0;

int get_index(unsigned int key) {
    if (m > MIN_BUCKETS) {
        return (key - (key % (unsigned int)(m * BUCKET_SIZE))) / (m * BUCKET_SIZE);
    }
    else {
        return 0;
    }
}

int main() {
    //read m, n from input
    std::cin >> m >> n;
    //create a vector of nodes
    std::vector<std::vector<unsigned int> > buckets;
    //read m from cin
    for (unsigned int i = 0; i < m; i++) {
        int data;
        std::cin >> data;
        int index = get_index(data);
        if (current_size <= index)
        {
            for (unsigned int j = current_size; j <= index; j++) {
                buckets.push_back(std::vector<unsigned int>());
                current_size++;
            }
        }
        buckets[index].push_back(data);


    }
    //read n from cin, save it in a vector
    std::vector<unsigned int> queries;
    for (unsigned int i = 0; i < n; i++) {
        unsigned int data;
        std::cin >> data;
        queries.push_back(data);
    }
    //for each query, find the index of the bucket it belongs to
    for (unsigned int i = 0; i < n; i++) {
#ifdef EQUAL
        int index = get_index(queries[i]), min = queries[i] + 1;

        int index2 = (index - 1 < 0 || index - 1 > current_size) ? 0 : index - 1;
        if (index >= current_size) {
            std::cout << "-1 ";
        }
        else {
            for (unsigned int j = 0; j < buckets[index].size(); j++) {
                if ((buckets[index][j] < min && min > queries[i]) || (buckets[index][j] > min && buckets[index][j] <= queries[i])) {
                    min = buckets[index][j];
                }
            }
            if (index != index2) {
                for (unsigned int j = 0; j < buckets[index2].size(); j++) {
                    if ((buckets[index][j] < min && min > queries[i]) || (buckets[index][j] > min && buckets[index][j] <= queries[i])) {
                        min = buckets[index2][j];
                    }
                }
            }
            if (min > queries[i]) {
                std::cout << "-1\n";
    }
            else {
                std::cout << min << std::endl;
            }
#else
        int index = get_index(queries[i]), min = queries[i];

        int index2 = (index - 1 < 0 || index - 1 > current_size) ? 0 : index - 1;
        if (index >= current_size) {
            std::cout << "-1 ";
        }
        else {
            for (unsigned int j = 0; j < buckets[index].size(); j++) {
                if ((buckets[index][j] < min && min == queries[i]) || (buckets[index][j] > min && buckets[index][j] < queries[i])) {
                    min = buckets[index][j];
                }
            }
            if (index != index2) {
                for (unsigned int j = 0; j < buckets[index2].size(); j++) {
                    if ((buckets[index][j] < min && min == queries[i]) || (buckets[index][j] > min && buckets[index][j] < queries[i])) {
                        min = buckets[index2][j];
                    }
                }
            }
            if (min == queries[i]) {
                std::cout << "-1\n";
            }
            else {
                std::cout << min << std::endl;
            }
#endif
            
        }
    }





}