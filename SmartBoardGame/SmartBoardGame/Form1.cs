using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;
using System.ComponentModel;

namespace SmartBoardGame
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void spot_Click(object sender, EventArgs e)
        {
            runEathGame("Difference.exe");
        }

        private void pairs_Click(object sender, EventArgs e)
        {
            runEathGame("pairs.exe");
        }

        private void hidden_Click(object sender, EventArgs e)
        {

        }

        private void hangman_Click(object sender, EventArgs e)
        {
            runEathGame("hangman.exe");
        }

        public void runEathGame(String name)
        {
            String filePath = System.IO.Directory.GetCurrentDirectory() +"\\bin\\" + name;
            Process.Start(filePath);
        }
        private void puzzle_Click(object sender, EventArgs e)
        {
            runEathGame("puzzle.exe");
        }

    }
}
