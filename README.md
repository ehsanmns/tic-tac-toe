<h1>Tic Tac Toe Game</h1>
<p>This is a simple implementation of the classic Tic Tac Toe game in C++. The game is played on a 3x3 board where two players take turns to place their symbol ('X' or 'O') in an empty cell until one of the following conditions is met:</p>
<ul>
<li>One player has three symbols in a row (horizontal, vertical or diagonal).</li>
<li>The board is full and there is no winner.</li>
</ul>
<h2>How to Play</h2>
<ol>
<li>Clone the repository or download the&nbsp;<code>tictactoe.cpp</code>&nbsp;file.</li>
<li>Compile the code using a C++ compiler of your choice (e.g. g++).</li>
<li>Run the executable file and follow the prompts to play.</li>
</ol>
<h2>Code Structure</h2>
<p>The code consists of several functions that perform different tasks:</p>
<ul>
<li><code>initBoard()</code>: Initializes the board with empty spaces.</li>
<li><code>displayBoard()</code>: Displays the current state of the board.</li>
<li><code>isGameOver()</code>: Checks if the game has ended.</li>
<li><code>makeMove()</code>: Prompts the current player for their move and updates the board.</li>
<li><code>main()</code>: Controls the flow of the game by calling the above functions.</li>
</ul>
<p>The game logic is contained in the <code>isGameOver()</code> function, which checks all possible winning configurations and the draw condition. The <code>makeMove()</code> function validates the user input and updates the board accordingly.</p>
<h2>Future Improvements</h2>
<p>Some possible improvements to the game could be:</p>
<ul>
<li>Adding a graphical user interface (GUI) to make it more user-friendly.</li>
<li>Allowing the players to choose their symbols instead of always using 'X' and 'O'.</li>
<li>Implementing an AI player that can play against the human player.</li>
</ul>
