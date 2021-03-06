/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVCalendar>, NSDateComponents;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    <CalDAVCalendar> *_calendar;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_eventFilterStartDate;
    int _fetchingEtagState;
    NSDateComponents *_todoFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    bool_fallbackOnMultiGetError;
    bool_getScheduleChanges;
    bool_getScheduleTags;
    bool_supportsExtendedCalendarQuery;
    bool_syncEvents;
    bool_syncTodos;
}

@property(retain) <CalDAVCalendar> * calendar;
@property(retain) NSDateComponents * eventFilterEndDate;
@property(retain) NSDateComponents * eventFilterStartDate;
@property bool fallbackOnMultiGetError;
@property bool getScheduleChanges;
@property bool getScheduleTags;
@property bool supportsExtendedCalendarQuery;
@property bool syncEvents;
@property bool syncTodos;
@property(retain) NSDateComponents * todoFilterEndDate;
@property(retain) NSDateComponents * todoFilterStartDate;

- (bool)_shouldFetchEventsForState:(int)arg1;
- (bool)_shouldFetchTodosForState:(int)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (id)calendar;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;
- (void)dealloc;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (bool)fallbackOnMultiGetError;
- (bool)getScheduleChanges;
- (bool)getScheduleTags;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(bool)arg5 getScheduleChanges:(bool)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(bool)arg4 getScheduleChanges:(bool)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (void)setCalendar:(id)arg1;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (void)setFallbackOnMultiGetError:(bool)arg1;
- (void)setGetScheduleChanges:(bool)arg1;
- (void)setGetScheduleTags:(bool)arg1;
- (void)setSupportsExtendedCalendarQuery:(bool)arg1;
- (void)setSyncEvents:(bool)arg1;
- (void)setSyncTodos:(bool)arg1;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (bool)shouldFetchMoreETags;
- (bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (bool)supportsExtendedCalendarQuery;
- (bool)syncEvents;
- (bool)syncTodos;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;

@end
