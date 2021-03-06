/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, PUAirplayRoute;

@interface PUAirplayRouteTableViewDataSource : NSObject {
    NSArray *_routes;
    PUAirplayRoute *_selectedRoute;
    id _updateHandler;
    bool_shouldCondenseDisplay;
}

@property(copy,readonly) NSString * displayNameForRoutes;
@property(copy,readonly) NSArray * routes;
@property(retain) PUAirplayRoute * selectedRoute;
@property(readonly) bool shouldCondenseDisplay;
@property(copy) id updateHandler;

- (void).cxx_destruct;
- (void)_updateRoutes:(id)arg1;
- (void)_updateTableViewCell:(id)arg1 forRoute:(id)arg2 isSelectedRoute:(bool)arg3;
- (void)dealloc;
- (id)displayNameForRoutes;
- (id)init;
- (id)routes;
- (id)selectedRoute;
- (void)setSelectedRoute:(id)arg1 updatingCellsFromHelper:(id)arg2;
- (void)setSelectedRoute:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (bool)shouldCondenseDisplay;
- (id)tableView:(id)arg1 cellForRouteIndex:(long long)arg2;
- (id)updateHandler;
- (void)updateTableViewCell:(id)arg1 forRouteIndex:(long long)arg2;

@end
