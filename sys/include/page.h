/* ARCHITECTURE-SPECIFIC */
#ifndef _PAGE_H
#define _PAGE_H

struct pageoptions {
	/* If 1, the page is for user-mode; otherwise, it is for kernel-mode */
	int u : 1;

	/* If 1, the page is readable */
	int r : 1;

	/* If 1, the page is writable */
	int w : 1;

	/* If 1, the page is executable */
	int x : 1;

	int reserved : 4; /* Fill struct to 1 byte */
}

#endif
