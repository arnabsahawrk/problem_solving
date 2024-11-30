/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  const initialValue = init;
  let value = init;

  return {
    increment: () => (value += 1),
    decrement: () => (value -= 1),
    reset: () => (value = initialValue),
  };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
