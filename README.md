# SRTS

**SRTS** is a command-line tool for **memorization and spaced review**.

The idea is simple: instead of reviewing the same material every day, SRTS schedules previous chapters for review using increasing intervals.

## 🧠 Spaced Review System

SRTS is based on a level system where each level represents a longer review interval:

| Level | Review After |
| ----: | -----------: |
|     1 |        1 day |
|     2 |       3 days |
|     3 |       7 days |
|     4 |      14 days |
|     5 |      30 days |
|     6 |      60 days |
|     7 |     120 days |
|     8 |     240 days |
|     9 |     360 days |

The goal is to gradually increase the time between reviews as the material becomes more familiar.

For example, if you start learning a chapter on **Day 1**, SRTS can schedule it for later review according to the review levels.

---

## 🚀 Current CLI

The current version can be used directly from the command line.

### Basic Syntax

```bash
./srts <number> <unit>
```

Available units:

```text
m : month
w : week
d : day
```

### Examples

```bash
./srts 2 w
```

This generates a 2-week review schedule.

Example output:

```text
 -------- day 1 --------


=> Day 1 chapter


 -------- day 2 --------


=> Day 2 chapter

Day 1 chapter

 -------- day 3 --------


=> Day 3 chapter

Day 2 chapter

 -------- day 4 --------


=> Day 4 chapter

Day 3 chapter

 -------- day 5 --------


=> Day 5 chapter

Day 1 chapter
Day 4 chapter
```

As the days progress, older chapters appear again according to the review schedule.

---

## 📅 Combining Time Units

You can combine months, weeks, and days.

For example:

```bash
./srts 3 m 2 w 5 d
```

Output:

```text
that is 3 monthes and 2 weeks and 5 days total 109 days
```

SRTS converts the provided time units into a total number of days and generates the corresponding schedule.

---

## ❓ Help

You can see the currently supported arguments with:

```bash
./srts help
```

Output:

```text
m : month
w : week
d : day

--->  srts 3 m 2 w 5 d
```

---

## 🎯 Project Goal

SRTS is intended to become a tool for managing **memorization and revision schedules** from the terminal.

The core idea is:

```text
Learn
  ↓
Review after a short interval
  ↓
Review after a longer interval
  ↓
Review after an even longer interval
  ↓
Long-term retention
```

Instead of manually deciding what to review every day, the program generates the review schedule automatically.

---

## 🖥️ CLI and Interactive CLI

The project is planned to have two different ways of interacting with it.

### Regular CLI

The regular CLI is the currently working part of the project.

It is designed for commands such as:

```bash
./srts 2 w
```

and:

```bash
./srts 3 m 2 w 5 d
```

It is useful for quickly generating a schedule directly from the shell.

### Interactive CLI

An interactive CLI is planned as a more feature-rich interface.

The interactive part is still under development, and its final feature set has not been defined yet.

The intention is to eventually make working with the review system easier without requiring every command to be written from scratch.

---

## 🗺️ Roadmap

The project is currently focused on building the core scheduling system.

Possible future areas include:

* Interactive CLI
* Managing chapters/material
* Tracking review progress
* Marking material as learned
* Moving material between review levels
* Persistent data
* Review history
* Daily review commands
* Better schedule visualization
* Configuration
* Statistics and progress tracking

These features are part of the project's direction and may change as development continues.

---

## 📐 Review Levels

The current review intervals are:

```text
Level 1 → 1 day
Level 2 → 3 days
Level 3 → 7 days
Level 4 → 14 days
Level 5 → 30 days
Level 6 → 60 days
Level 7 → 120 days
Level 8 → 240 days
Level 9 → 360 days
```

This creates a progressively expanding review interval:

```text
1
 ↓
3
 ↓
7
 ↓
14
 ↓
30
 ↓
60
 ↓
120
 ↓
240
 ↓
360 days
```

The underlying principle is **spaced repetition**: review material at increasing intervals to support long-term memorization.

---

## 🔧 Project Status

**Current status:** Early development

* [x] Command-line argument parsing
* [x] Day/week/month input
* [x] Multiple time units in one command
* [x] Total-day calculation
* [x] Review schedule generation
* [x] Basic help command
* [ ] Interactive CLI
* [ ] Add more features to thes to-do-list to add to Interactive CLI

---

## 📄 License

License information will be added later.
