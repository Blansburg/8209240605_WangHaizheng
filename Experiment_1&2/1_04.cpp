#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    unsigned int testUnint = 65534;//oxfffe
    cout << "output in unsigned int type:" << testUnint << endl;//<<oct;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;
    //有符号整形的上限为32767，输入大于32767而小于65536的值会得到那个数-65536。 
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出

    cout << endl << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出

    double testUnint2;
    cout << endl << "please input a double type:";
    cin >> testUnint2;
    cout << "output in int type:" << dec << (int(testUnint2)) << endl;
    //实型变为整形会约去小数部分。 
    system("pause");
    return 0;
}
