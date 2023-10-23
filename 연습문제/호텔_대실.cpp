/*
https://school.programmers.co.kr/learn/courses/30/lessons/155651
*/
#include <string>
#include <vector>

int solution(std::vector<std::vector<std::string>> book_time) {
    int answer = 0;
    int start_h(0), start_m(0), end_h(0), end_m(0), start(0), end(0);
    int rooms[1440] = {0,};
    
    for(int i = 0; i < book_time.size(); ++i){
        start_h = stoi(book_time[i][0].substr(0,2));
        start_m = stoi(book_time[i][0].substr(3,5));
        end_h = stoi(book_time[i][1].substr(0,2));
        end_m = stoi(book_time[i][1].substr(3,5));
        start = start_h * 60 + start_m;
        end = end_h * 60 + end_m + 9;
        for (int j = start; j <= end; ++j){
            rooms[j] += 1;
        }
    }
    for (int i = 0; i < 1440; ++i){
        answer = answer > rooms[i] ? answer : rooms[i];
    }
    return answer;
}