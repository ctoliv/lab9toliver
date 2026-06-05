# Lab 9 - Side Shooter Updates

This repository contains my Lab 9 project for CPSC 440 Game Programming.

## Description

This lab modifies the Side Shooter program. The project uses Allegro, a Kirby player sprite, ghosts, and arrows. For Lab 9, I fixed Kirby's bottom screen collision, added multiple Kirby images for different life states, added score tracking, added a status display, and added a game over screen.

## Features

- Kirby can move up, down, left, and right
- Kirby cannot move off the bottom of the screen
- Arrow keys control Kirby's movement
- Spacebar fires arrows
- Arrows can collide with ghosts
- Ghost kills are tracked as the score
- Ghosts can collide with Kirby
- Kirby loses a life when hit by a ghost
- Kirby's image changes based on how many lives are left
- Kirby's lives and ghost kills are displayed on screen
- A health bar shows Kirby's remaining lives
- The game ends when Kirby reaches 0 lives
- A Game Over screen displays final stats
- The Game Over screen stays visible for at least 5 seconds before closing

## Controls

- Up Arrow: Move Kirby up
- Down Arrow: Move Kirby down
- Left Arrow: Move Kirby left
- Right Arrow: Move Kirby right
- Spacebar: Fire arrow
- Escape: Close the game

## Project Files

- `main.cpp` - Main game loop, keyboard input, timer setup, status display, health bar, and game over screen
- `player.h` - Player class definition
- `player.cpp` - Kirby movement, lives, score, image loading, and drawing
- `ghost.h` - Ghost class definition
- `ghost.cpp` - Ghost movement, drawing, spawning, and collision with Kirby
- `arrow.h` - Arrow class definition
- `arrow.cpp` - Arrow firing, movement, drawing, and collision with ghosts
- `kirby0.png` - Kirby image for full health
- `kirby1.png` - Kirby image for lower health
- `kirby2.png` - Kirby image for lower health
- `kirby3.png` - Kirby image for lower health
- `kirby4.png` - Kirby image for lowest health
- `ghost.png` - Ghost enemy image
- `arrow.png` - Arrow image

## How to Run

1. Open the solution in Visual Studio.
2. Make sure Allegro is installed through NuGet.
3. Make sure the Allegro Image, Font, and Primitives add-ons are installed.
4. Make sure all PNG files are included in the project folder.
5. Build and run the project.
6. Use the arrow keys to move Kirby and press Spacebar to shoot arrows.

## Author

Christian Toliver
