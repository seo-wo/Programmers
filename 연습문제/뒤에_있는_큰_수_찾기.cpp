/*
https://school.programmers.co.kr/learn/courses/30/lessons/154539
*/
#include <string>
#include <vector>
#include <stack>

std::vector<int> solution(std::vector<int> numbers) {
    int index(numbers.size() - 1);
    std::vector<int> answer(index , -1);
    std::stack<int> stk;
    std::vector<int>::reverse_iterator rit = numbers.rbegin();

    for (; rit != numbers.rend(); ++rit){
        if (stk.empty())
            answer[index] = -1;
        else {
            while(!stk.empty()){
                if (stk.top() > *rit){
                    answer[index] = stk.top();
                    break;
                }
                stk.pop();
            }
        }
        --index;
        stk.push(*rit);
    }
    answer.push_back(-1);
    return answer;
}