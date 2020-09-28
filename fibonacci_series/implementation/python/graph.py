import sys
import os
import timeit
from fibonacci import fibonacci_value
from functools import partial
import matplotlib.pyplot as plt 

time_taken = []
values = []
for i in range(3, 1001):
    testNTimer = timeit.Timer(partial(fibonacci_value, i))
    t = testNTimer.timeit(number = 100)
    time_taken.append(t)
    values.append(i)

  
  
plt.plot(values, time_taken)  
plt.xlabel('Value of N') 
plt.ylabel('Time take to calcuate') 
plt.title('Time taken to calculate F(n)') 
plt.show() 
    

