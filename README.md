<h1>Push Swap</h1>

<h2>Introduction</h2>
<p>Welcome to the <strong>Push Swap</strong> project, a part of the 42 curriculum. This project focuses on sorting algorithms and data structures, specifically stacks. The primary goal is to sort a list of integers using a predefined set of operations, with the least number of moves possible.</p>

<h2>Objective</h2>
<p>The objective of the "push_swap" project is to implement a function that sorts a list of integers using two stacks (<code>stack_a</code> and <code>stack_b</code>) and a limited set of operations. The challenge lies in doing this with the minimum number of operations, requiring an efficient sorting algorithm and a deep understanding of stack manipulation.</p>

<h2>Operations</h2>
<p>The allowed operations are:</p>
<ul>
    <li><code>sa</code> (swap a): Swap the first two elements at the top of <code>stack_a</code>.</li>
    <li><code>sb</code> (swap b): Swap the first two elements at the top of <code>stack_b</code>.</li>
    <li><code>ss</code> (swap both): Swap the first two elements at the top of both <code>stack_a</code> and <code>stack_b</code>.</li>
    <li><code>pa</code> (push a): Take the first element at the top of <code>stack_b</code> and put it at the top of <code>stack_a</code>.</li>
    <li><code>pb</code> (push b): Take the first element at the top of <code>stack_a</code> and put it at the top of <code>stack_b</code>.</li>
    <li><code>ra</code> (rotate a): Shift all elements of <code>stack_a</code> up by one. The first element becomes the last one.</li>
    <li><code>rb</code> (rotate b): Shift all elements of <code>stack_b</code> up by one. The first element becomes the last one.</li>
    <li><code>rr</code> (rotate both): Shift all elements of both <code>stack_a</code> and <code>stack_b</code> up by one.</li>
    <li><code>rra</code> (reverse rotate a): Shift all elements of <code>stack_a</code> down by one. The last element becomes the first one.</li>
    <li><code>rrb</code> (reverse rotate b): Shift all elements of <code>stack_b</code> down by one. The last element becomes the first one.</li>
    <li><code>rrr</code> (reverse rotate both): Shift all elements of both <code>stack_a</code> and <code>stack_b</code> down by one.</li>
</ul>

<h2>Key Concepts</h2>
<ul>
    <li><strong>Stacks</strong>: The primary data structure used, where operations are performed on the top elements.</li>
    <li><strong>Sorting Algorithms</strong>: Implementation of efficient algorithms to sort the stack using the allowed operations.</li>
    <li><strong>Optimization</strong>: Minimizing the number of operations to achieve the sorted stack.</li>
</ul>

<h2>Implementation Tips</h2>
<ul>
    <li><strong>Understand Operations</strong>: Make sure you fully understand how each operation affects the stacks.</li>
    <li><strong>Algorithm Choice</strong>: Choose appropriate sorting algorithms depending on the size of the input list. Common approaches include:
        <ul>
            <li>Insertion sort for small sets of numbers.</li>
            <li>Quick sort or merge sort adaptations for larger sets.</li>
        </ul>
    </li>
    <li><strong>Edge Cases</strong>: Consider edge cases such as already sorted lists, reverse sorted lists, and lists with duplicate numbers.</li>
    <li><strong>Testing</strong>: Create a robust set of tests to ensure your program handles various scenarios correctly.</li>
</ul>

<h2>Conclusion</h2>
<p>The <strong>Push Swap</strong> project is a great opportunity to improve your understanding of sorting algorithms, data structures, and algorithm optimization. Completing this project will equip you with valuable problem-solving skills and a deeper comprehension of efficient algorithm design in C.</p>
<p>Feel free to explore, experiment, and optimize your implementation!</p>
