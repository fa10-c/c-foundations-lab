# 00 — Logic Notes

## What I practiced
- Using a `while` loop to avoid repeating code
- Storing test values in an array and accessing them with `n[i]`
- Calling a function on each value

## Bugs / confusions I hit
- Tried to create an array with size `i` inside the loop (`r[i]`) → doesn’t work because size changes and is not a constant.
- Forgot `i++` at first → would cause an infinite loop.

## Things I learned
- Arrays have a fixed size and you usually declare them outside the loop.
- `n[i]` means “the i-th element of the array”.
- A `while` loop needs: initialization, condition, and update.

## Tests I ran
- 0, 5, 11, 6, 111110, 22