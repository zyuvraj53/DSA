# Solution
## Time Complexity:
**O(log(min(m,n)))**

[Youtube Video](https://www.youtube.com/watch?v=yD7wV8SyPrc&ab_channel=KeertiPurswani)

**Q. Two arrays are given: `1 5 8 10 18 20 ` and ` 2 3 6 7`. Find the Median.**

A. If we were to combine these two arrays to one:  
` 1 2 3 5  `***`6 7 `***` 8 10 18 20 `  
  
n1 = 6 elements and n2 = 4 elements  

Total elements = 10, which means there are two middle elemets, i.e., 6 & 7, so the median is 6.5 .  
  
**Brute Force:**  
- Merge both
- Find the median
- **Time(n1 + n2)**
- **Space(n1 + n2)**
- reducible to **Space(1)** with minimal effort  
  
**Better Approach:**
- We know that our median will divide this into two parts
- `1 2 3 5 6 `|` 7 8 10 18 20`  
- &emsp;&emsp;&emsp;&ensp;`1 5 `|` 8 10 18 20`&ensp; comes from the 1st array.
- &emsp;&emsp;&nbsp;`2 3 6 `|` 7`&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; comes from the 2nd array.
- The number of elements will be the same, i.e., 5 in each (n1+n2)/2.
- The median will be given by the maximum of the elements from the lists 1 and 2 on the left, i.e. **5**, and **6**, and the minimum of the elements from the lists 1 and 2, i.e., **8** and **7**.
- This is because in the sorted array, it is the max value of left half, and the min value of right half.
