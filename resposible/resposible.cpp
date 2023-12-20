// resposible.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>


class UserHandler {
public:
    void getUserInput() {
        std::cout << "Enter your name: ";
        std::getline(std::cin, userName);
    }

    void greetUser() {
        std::cout << "Hello, " << userName << "!" << std::endl;
    }

private:
    std::string userName;
};


class DataManager {
public:
    void saveData(const std::string& data) {
        
        std::cout << "Saving data: " << data << std::endl;
    }
};

int main() {
    
    UserHandler userHandler;
    userHandler.getUserInput();
    userHandler.greetUser();

    DataManager dataManager;
    dataManager.saveData("Some data to save");

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
