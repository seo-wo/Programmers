/*
https://school.programmers.co.kr/learn/courses/30/lessons/176963?language=javascript
*/

function solution(name, yearning, photos) {
  var answer = [];
  let hash_map = {};
  for(let i = 0; i < name.length; ++i){
      hash_map[name[i]] = yearning[i];
  }
  let meomorial_score = 0;
  photos?.forEach((photo) => {
      photo?.forEach((test)=> {
          if (typeof hash_map[test] !== "undefined")
              meomorial_score += hash_map[test];
      })
      answer.push(meomorial_score)
      meomorial_score = 0;
  })
  return answer;
}