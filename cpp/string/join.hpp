#ifndef STRING_JOIN_HPP
#define STRING_JOIN_HPP 1
#include <string>
#include <vector>

std::string join(const std::string &delim, const std::vector<std::string> &v) {
    std::string ret = "";
    for (auto &s : v) {
        if (!ret.empty()) ret += delim;
        ret += s;
    }
    return ret;
}
#endif