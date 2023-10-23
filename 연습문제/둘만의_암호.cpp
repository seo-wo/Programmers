/*
https://school.programmers.co.kr/learn/courses/30/lessons/155652
*/
#include <string>
#include <vector>

std::string solution(std::string s, std::string skip, int index) {
    std::string answer = "";
    std::string::iterator it = s.begin();
    std::string my_set = "";
    for(char c = 'a'; c <= 'z'; ++c){
        if (skip.find(c) == std::string::npos)
            my_set.push_back(c);
    }

    int tmp(0), d(0), my_size(my_set.size());
    for(; it != s.end(); ++it){
        tmp = my_set.find(*it);
        d = (tmp + index) % my_size;
        answer.push_back(my_set[d]);
    }
    return answer;
}