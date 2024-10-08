void   setup_octree(IDL_LONG N_blks_in,
		    float *xr_blk, float *yr_blk, float *zr_blk,
		    IDL_LONG MAX_AMRLEVELS, float *box_range,
		    octree_block *octree_blocklist_in, 
		    IDL_LONG N_octree_blocks,
		    IDL_LONG *numparents_at_AMRlevel_in,
		    IDL_LONG *block_at_AMRlevel_in);
void setup_octree_pointers(
                        IDL_LONG MAX_AMRLEVELS_in,
                        octree_block *octree_blocklist_in,
                        IDL_LONG *numparents_at_AMRlevel_in,
                        IDL_LONG *block_at_AMRlevel_in);

