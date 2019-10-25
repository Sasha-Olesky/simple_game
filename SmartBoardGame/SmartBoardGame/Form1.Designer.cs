namespace SmartBoardGame
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.spot = new System.Windows.Forms.Button();
            this.pairs = new System.Windows.Forms.Button();
            this.hidden = new System.Windows.Forms.Button();
            this.hangman = new System.Windows.Forms.Button();
            this.puzzle = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // spot
            // 
            this.spot.Location = new System.Drawing.Point(110, 72);
            this.spot.Name = "spot";
            this.spot.Size = new System.Drawing.Size(142, 41);
            this.spot.TabIndex = 0;
            this.spot.Text = "Spot The Difference";
            this.spot.UseVisualStyleBackColor = true;
            this.spot.Click += new System.EventHandler(this.spot_Click);
            // 
            // pairs
            // 
            this.pairs.Location = new System.Drawing.Point(110, 132);
            this.pairs.Name = "pairs";
            this.pairs.Size = new System.Drawing.Size(142, 41);
            this.pairs.TabIndex = 1;
            this.pairs.Text = "Pairs";
            this.pairs.UseVisualStyleBackColor = true;
            this.pairs.Click += new System.EventHandler(this.pairs_Click);
            // 
            // hidden
            // 
            this.hidden.Location = new System.Drawing.Point(110, 191);
            this.hidden.Name = "hidden";
            this.hidden.Size = new System.Drawing.Size(142, 41);
            this.hidden.TabIndex = 2;
            this.hidden.Text = "Hidden Object";
            this.hidden.UseVisualStyleBackColor = true;
            this.hidden.Click += new System.EventHandler(this.hidden_Click);
            // 
            // hangman
            // 
            this.hangman.Location = new System.Drawing.Point(110, 251);
            this.hangman.Name = "hangman";
            this.hangman.Size = new System.Drawing.Size(142, 41);
            this.hangman.TabIndex = 3;
            this.hangman.Text = "Hangman";
            this.hangman.UseVisualStyleBackColor = true;
            this.hangman.Click += new System.EventHandler(this.hangman_Click);
            // 
            // puzzle
            // 
            this.puzzle.Location = new System.Drawing.Point(110, 306);
            this.puzzle.Name = "puzzle";
            this.puzzle.Size = new System.Drawing.Size(142, 41);
            this.puzzle.TabIndex = 4;
            this.puzzle.Text = "Puzzle";
            this.puzzle.UseVisualStyleBackColor = true;
            this.puzzle.Click += new System.EventHandler(this.puzzle_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(371, 412);
            this.Controls.Add(this.puzzle);
            this.Controls.Add(this.hangman);
            this.Controls.Add(this.hidden);
            this.Controls.Add(this.pairs);
            this.Controls.Add(this.spot);
            this.Name = "Form1";
            this.Text = "Spot The Difference";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button spot;
        private System.Windows.Forms.Button pairs;
        private System.Windows.Forms.Button hidden;
        private System.Windows.Forms.Button hangman;
        private System.Windows.Forms.Button puzzle;
    }
}

