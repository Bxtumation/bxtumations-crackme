#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
void konsolpatlatici31(){
	system("cls");
}bool zz=false;
void www() {
    if(zz==true){konsolpatlatici31();
        std::cout << "--------------------\n"
        << "|   CORRECT KEY!!  |\n"
        << "--------------------\n";
        system("pause > nul");
        std::cout << "press any key to exit..";
        system("pause > nul");
    }else {
	konsolpatlatici31();
        std::cout << "nice try xd\n";
	std::cout << "press any key to exit..";
	system("pause > nul");
        std::exit(0);
    }
}
std::string printfln3(const std::string& input, int mucize_doktor) {
    std::string TURKIYEEEEEE_AUAUUAUUAUUAUUAAUAU = input;
    for (char& c : TURKIYEEEEEE_AUAUUAUUAUUAUUAAUAU) {
        if (std::isdigit(c)) {
            c=(c-'0'+mucize_doktor)%10+'0';
        }
    }return TURKIYEEEEEE_AUAUUAUUAUUAUUAAUAU;
}
std::string printfln33(const std::string& input, int mucize_doktor) {
    return printfln3(input, 10 - mucize_doktor);
}
void print(const std::string& str){std::cout << str;}
int main() {
    SetConsoleTitleA("bxtumations crackme");
    print("please enter the key:\n");
    std::string inp;
    std::string messi333333 = "331";
    int mucize_doktor = 22;
    std::string messi3333333 = printfln3(messi333333, mucize_doktor);
    while (true) {
        std::cin >> inp;
        if (inp == messi3333333) {zz=true;break;
        } else {
	    konsolpatlatici31();
            print("wrong key!!");
	    print("\ntry again :))\n");
        }
	}
	www();
    return 0;
}
