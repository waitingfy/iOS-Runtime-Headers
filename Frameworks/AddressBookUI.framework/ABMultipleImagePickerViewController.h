/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABMultipleSourceImagePickerDelegate>, NSMutableArray;

@interface ABMultipleImagePickerViewController : UITableViewController {
    <ABMultipleSourceImagePickerDelegate> *_delegate;
    NSMutableArray *_imageCellData;
    unsigned long long _selectedImageIndex;
}

@property <ABMultipleSourceImagePickerDelegate> * delegate;

- (void)addImageData:(id)arg1 title:(id)arg2 isSelectedImage:(bool)arg3 person:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
