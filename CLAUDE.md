# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository. The shared teaching and build guidance for all book projects is in `../CLAUDE.md`.

## Chapter 2: "Game Objects and 2D Graphics"

A side-scrolling 2D spaceship game. Executable: `./cmake-build-debug/spaceship_2d`.

It starts from Chapter 1's `Game` class skeleton (`Initialize` / `RunLoop` / `Shutdown`, looping `ProcessInput` → `UpdateGame` → `GenerateOutput`) without the Pong-specific paddle/ball code. Chapter 2 adds:

- `Game` owning a `std::vector<Actor*>`, plus pending actors, `AddActor` / `RemoveActor`, `LoadData` / `UnloadData`, and texture loading (needs SDL_image).
- The `Actor` / `Component` model: `SpriteComponent`, `AnimSpriteComponent`, `BGSpriteComponent`, and a `Ship` actor.

Pitfalls to watch for in this chapter: `Game` and `Actor` include each other's headers (use forward declarations), who owns and deletes each actor, and changing the actors vector while iterating over it.
