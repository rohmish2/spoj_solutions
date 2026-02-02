# SPOJ Solutions

Personal collection of accepted solutions to SPOJ (Sphere Online Judge) problems.

## About SPOJ

SPOJ is an online judge platform with 20,000+ algorithmic problems for competitive programming practice. Problems cover data structures, algorithms, mathematics, dynamic programming, and more.

**Platform**: [www.spoj.com](https://www.spoj.com)

## Repository Contents

Solutions to various SPOJ problems written in **C++**.

## Structure

```
SPOJSOLUTIONS/
└── [Problem solutions in C++]
```

## Language

- **C++** - All solutions implemented in C++

## Usage

### Compiling

```bash
g++ -std=c++14 -O2 problem_name.cpp -o problem_name
```

### Running

```bash
./problem_name < input.txt
```

## Problem Categories

Solutions may include problems from:

- **Ad-Hoc**: Implementation and simulation problems
- **Data Structures**: Arrays, trees, graphs, heaps
- **Algorithms**: Sorting, searching, greedy, divide and conquer
- **Mathematics**: Number theory, combinatorics, geometry
- **Dynamic Programming**: Optimization problems with overlapping subproblems
- **Graph Theory**: DFS, BFS, shortest paths, MST
- **String Algorithms**: Pattern matching, string processing

## Solving Approach

1. Read and understand the problem statement
2. Identify the algorithmic approach needed
3. Implement solution in C++
4. Test with sample inputs
5. Submit to SPOJ for automated judging
6. Optimize if time/memory limits are exceeded

## Tips

- **Time Limits**: Most problems have strict time constraints (1-5 seconds)
- **Input/Output**: Use fast I/O methods for large inputs
- **Memory**: Be mindful of memory limits (typically 256 MB - 1.5 GB)
- **Testing**: Always test with edge cases before submission

## Fast I/O Template

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Your solution here
    
    return 0;
}
```

## Common Techniques

- **Fast Input/Output**: Disable sync with stdio for speed
- **STL Usage**: Leverage C++ Standard Template Library
- **Optimization**: Use appropriate data structures and algorithms
- **Edge Cases**: Handle boundary conditions carefully

## Resources

- **SPOJ Website**: https://www.spoj.com
- **My SPOJ Profile**: [Add your profile link]
- **Problem Discussion**: SPOJ forums for each problem

## Compilation Flags

Recommended flags for compilation:

```bash
g++ -std=c++14 -O2 -Wall -Wextra solution.cpp -o solution
```

- `-std=c++14`: Use C++14 standard
- `-O2`: Optimization level 2
- `-Wall -Wextra`: Enable warnings

## Disclaimer

These solutions are provided for learning purposes. Try solving problems independently before referring to solutions.

## Contributing

Feel free to:
- Suggest optimizations
- Report bugs in solutions
- Add alternative approaches

## License

Available for educational purposes.

## Author

**rohmish2** - [GitHub Profile](https://github.com/rohmish2)

---

**Practice makes perfect. Keep coding!** 
