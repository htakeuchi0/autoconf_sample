/**
 * @file main.cpp
 * @brief メインメソッドをもつソースファイル．
 */

#include "include/example.hpp"

/**
 * メインメソッド
 *
 * @param[in] argc コマンドライン引数の数
 * @param[in] argv コマンドライン引数
 * @return int 終了コード
 */
int main(int argc, char **argv) {
    if (argc < 3) {
        std::cerr << "Usage: example <name> <value> <value2>\n";
        return 1;
    }

    std::string name(argv[1]);
    int value = std::stoi(argv[2]);
    int value2 = std::stoi(argv[3]);

    example::Example obj(name, value);
    obj.AddValue(value2);
    obj.Show();

    return 0;
}
