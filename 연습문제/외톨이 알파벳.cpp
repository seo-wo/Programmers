/*
https://school.programmers.co.kr/learn/courses/15008/lessons/121683?language=cpp
*/

#include <string>
#include <vector>

std::string solution(std::string input) {
    std::string answer("");
    char tmp(0);
    int memo[26] = {0};
    for(int i = 0; i < input.length(); ++i){
        if (tmp != input[i]){
            ++memo[input[i] - 'a'];
        }
        tmp = input[i];
    }
    for (int i = 0; i < 26; ++i){
        if (memo[i] >= 2){
            answer.push_back(i + 'a');
        }
    }
    if (answer.empty())
        answer.push_back('N');
    return answer;
}