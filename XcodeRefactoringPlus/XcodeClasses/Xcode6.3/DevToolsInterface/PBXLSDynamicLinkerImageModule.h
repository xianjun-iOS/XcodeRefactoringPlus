//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXLSDynamicLinkerImageModule : PBXProjectModule <NSTableViewDataSource, PBXLSViewControllerProtocol>
{
    PBXLSDynamicLinkerImageController *_controller;
    PBXExtendedTableView *_tableView;
    NSButton *_addButton;
    NSButton *_deleteButton;
    NSButton *_resetButton;
    NSButton *_helpButton;
    NSTextField *_executablePath;
    NSTextField *_nameTextField;
    NSTextField *_pathTextField;
    XCExtendedArrayController *_selectedShlibsController;
    NSPopUpButton *_systemLevelPopUp;
    NSPopUpButton *_userLevelPopUp;
    NSSearchField *_searchField;
    PBXExecutable *_executable;
}

+ (id)defaultModuleNibName;
- (void)deleteSelection:(id)arg1;
- (void)resetShlibsAction:(id)arg1;
- (id)symbolLevelArray;
- (void)setDefaultUserSymbolLevel:(id)arg1;
- (void)setDefaultSystemSymbolLevel:(id)arg1;
- (id)newObjectBasedOnObject:(id)arg1 fromController:(id)arg2;
- (void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addObjectFile:(id)arg1;
- (id)executable;
- (void)setExecutable:(id)arg1;
- (void)setSymbolLevel:(int)arg1 forImage:(id)arg2;
- (struct CGSize)viewMinSize;
- (void)update;
- (void)dsModelWillDealloc:(id)arg1;
- (void)dsModelDidUpdate:(id)arg1;
- (id)_controllerExecutable;
- (void)reload:(id)arg1;
- (void)didAddImageController;
- (void)willAddImageController;
- (void)currentSymbolLevelChanged:(id)arg1;
- (void)updateDefaultTitleForExecutableSymbolLevelPopups:(id)arg1;
- (void)updateWindowTitle:(id)arg1;
- (void)activeExecutableDidChange:(id)arg1;
- (void)debugSessionEnded:(id)arg1;
- (void)closeModule;
- (void)selectSymbolPopupsForExecutable:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (unsigned long long)moduleWindowStyleMask;
- (id)dynamicLinkerImageController;
- (void)setDynamicLinkerImageController:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end