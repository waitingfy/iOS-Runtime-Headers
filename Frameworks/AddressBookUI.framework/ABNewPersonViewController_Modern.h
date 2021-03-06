/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABNewPersonViewControllerDelegate>, <ABPresenterDelegate>, <ABStyleProvider>, ABContactViewController, ABContactsFilter, ABPersonTableViewDataSource, ABPersonViewControllerHelper, CNContact, NSString, _UIAccessDeniedView;

@interface ABNewPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate> {
    _UIAccessDeniedView *_accessDeniedView;
    void *_addressBook;
    ABContactViewController *_contactViewController;
    ABPersonTableViewDataSource *_dataSource;
    void *_displayedPerson;
    ABPersonViewControllerHelper *_helper;
    CNContact *_mergeContact;
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    ABContactsFilter *_parentContactsFilter;
    void *_parentGroup;
    void *_parentSource;
    <ABPresenterDelegate> *_presentingDelegate;
    <ABStyleProvider> *_styleProvider;
    bool_isRealViewLoaded;
}

@property(readonly) _UIAccessDeniedView * accessDeniedView;
@property void* addressBook;
@property(readonly) ABContactViewController * contactViewController;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property void* displayedPerson;
@property(readonly) unsigned long long hash;
@property(readonly) ABPersonViewControllerHelper * helper;
@property bool isRealViewLoaded;
@property(retain) CNContact * mergeContact;
@property <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property(retain) ABContactsFilter * parentContactsFilter;
@property void* parentGroup;
@property void* parentSource;
@property <ABPresenterDelegate> * presentingDelegate;
@property bool savesNewContactOnSuspend;
@property bool showsCancelButton;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) Class superclass;

- (void)accessChanged;
- (id)accessDeniedView;
- (void*)addressBook;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)contactViewController;
- (id)dataSource;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void*)displayedPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isRealViewLoaded;
- (void)loadContactViewController;
- (void)loadRealView;
- (void)loadView;
- (id)mergeContact;
- (id)newPersonViewDelegate;
- (id)parentContactsFilter;
- (void*)parentGroup;
- (void*)parentSource;
- (id)presentingDelegate;
- (void)save:(id)arg1;
- (bool)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIsRealViewLoaded:(bool)arg1;
- (void)setMergeContact:(id)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)setParentContactsFilter:(id)arg1;
- (void)setParentGroup:(void*)arg1;
- (void)setParentSource:(void*)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)showsCancelButton;
- (id)styleProvider;

@end
