/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function (n) {
  let initial = n;
  return function () {
    return initial++;
  };
};

const counter = createCounter(10);
counter(); // 10
counter(); // 11
counter(); // 12
