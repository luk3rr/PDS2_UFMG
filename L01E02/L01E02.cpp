#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    char letters_list[N];
    int letters_count[N];
    
    for (int i=0; i < N; i++) {
        std::cin >> letters_list[i];
        letters_count[i] = 0;
    }
    
    std::cin.ignore();

    std::string phrase;
    std::getline (std::cin, phrase);
    
    for (int j=0; j < N; j++) {
        for (int k=0; k < phrase.length(); k++) {
            if (phrase[k] == letters_list[j]) {
                letters_count[j]++;
                phrase.replace(k, 1, "#");
            }
        }
    }
    
    std::cout << phrase << std::endl;
    for (int l=0; l < N; l++) {
        std::cout << letters_list[l] << " " << letters_count[l] << std::endl;
    }

    return 0;
}
