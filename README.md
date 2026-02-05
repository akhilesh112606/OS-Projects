# OS-Projects - 1 PROJECT
## PROJECT - 1 : PAYROLL PROCESSING (BATCH OS SIMULATION)
**Algorithm**
1. Open `input.txt` for reading and `output.txt` for writing.
2. Write header `ID\tBASIC Salary` to the output file.
3. Loop while `input.txt` has two values available.
4. Read `id` and `basic` from the current line.
5. Compute `bra = 0.2 * basic`.
6. Compute `da = 0.1 * basic`.
7. Update `basic = basic + bra + da`.
8. Write `id` and the updated `basic` (tab-separated) to `output.txt`.
9. After EOF, close both files.
10. Print `Successfully Executed!` to console and exit with status 0.
