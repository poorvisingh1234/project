/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    return arr.sort((a,b)=>fn(a)-fn(b));
};

//If fn(a) < fn(b), the function returns a negative value, indicating that a should come before b.
//If fn(a) > fn(b), the function returns a positive value, indicating that a should come after b.
//If fn(a) === fn(b), it returns 0, meaning their order is unchanged.