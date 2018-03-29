#ifndef TIMESCALEDB_PLANNER_IMPORT_H
#define TIMESCALEDB_PLANNER_IMPORT_H

/*
 * This file contains functions copied verbatim from the PG core planner.
 * These function had to be copied since they were declared static in the core planner, but we need them for our
 * manipulations.
 */

size_t estimate_hashagg_tablesize(struct Path *path,
						   const struct AggClauseCosts *agg_costs,
						   double dNumGroups);

struct PathTarget *make_partial_grouping_target(struct PlannerInfo *root,
							 PathTarget *grouping_target);

bool get_variable_range(PlannerInfo *root, VariableStatData *vardata, Oid sortop,
				   Datum *min, Datum *max);

#endif							/* TIMESCALEDB_PLANNER_IMPORT_H */
