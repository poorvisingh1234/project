/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    var answer = [] ;
    var cur = [];

    //Iterate through arr

    for(var i =0;i<arr.length;i++){
        cur.push(arr[i]);

        //if subarray is of length size , push our subarray

        if (cur.length === size){
            answer.push(cur);
            cur = []; //make cur an empty array again
        }
    }
    //if we havent pushed everything from arr, push them
    if (cur.length !=0) answer.push(cur);
    return answer;
    
};
