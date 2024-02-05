#include "longest_streak.h"

unsigned longest_streak(int array[], unsigned len) {
    int streak = 0;
    int curStreak = 1;
    for (int i = 0; i < len; i++) {
	if (i != 0 && array[i] == array[i-1]) {
	    curStreak++;
	} else {
	    if (curStreak > streak) {		    
		streak = curStreak;
	    }
	    curStreak = 1;
	}
    }

    return streak;
}
