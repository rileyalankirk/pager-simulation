///////////////////////////////////////////////
// Least Recently Used Replacement Algorithm //
///////////////////////////////////////////////

#include "general.h"
#include "pager.h"
#include "lru.h"

// Function that is unique to the LRU page replacement pager system: selecting victim frame.
// If there is a free frame, it returns it. Otherwise it has to select a frame that is currently in
// use based on the LRU algorithm. It returns the frame number of the selected frame but does not
// update any pager data.
uint64 lru_select_victim_frame(pager_data* pager)
{
	// TODO

	// Select the first empty frame available, if any
	if (pager->num_free_frames > 0) { return pager->num_frames - pager->num_free_frames; }
	return 0;
}
