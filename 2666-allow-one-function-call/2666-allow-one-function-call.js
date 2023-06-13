/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let calls=0;
    return function(...args){
           calls+=1;     
           if(calls==1)
               return fn(...args);
           return undefined;
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
