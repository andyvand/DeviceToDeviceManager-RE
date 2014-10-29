//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "D2DInquiryDelegate.h"
#import "D2DPairingDelegate.h"
#import "NSMenuDelegate.h"
#import "NSTableViewDelegate.h"

@class BluetoothHIDDeviceController, D2DProtocolManager, D2DSortedArrayController, NSAlert, NSArray, NSButton, NSImage, NSImageView, NSMutableArray, NSMutableDictionary, NSPanel, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTrackingArea, NSView;

@interface D2DCollectionView : NSViewController <D2DInquiryDelegate, D2DPairingDelegate, NSMenuDelegate, NSTableViewDelegate>
{
    BOOL mAutoAdjustButtonSize;	// 104 = 0x68
    BOOL mUserPasscode;	// 105 = 0x69
    NSTableView *mDeviceTable;	// 112 = 0x70
    D2DSortedArrayController *mDevicesArray;	// 120 = 0x78
    NSAlert *mAlert;	// 128 = 0x80
    NSPanel *mPairingViewPanel;	// 136 = 0x88
    NSView *mPairingView;	// 144 = 0x90
    NSTextField *mPairingText;	// 152 = 0x98
    NSTextField *mPairingHeader;	// 160 = 0xa0
    NSView *mPairViewPlaceholder;	// 168 = 0xa8
    id <D2DPairViewController> mPairViewController;	// 176 = 0xb0
    NSView *mOptionsViewPlaceholder;	// 184 = 0xb8
    NSPanel *mPairingOptionsPanel;	// 192 = 0xc0
    NSView *mPairingOptionsView;	// 200 = 0xc8
    NSTextField *mPairingPasscode;	// 208 = 0xd0
    NSTextField *mPairingOptionsText;	// 216 = 0xd8
    NSTextField *mPairingOptionsHeader;	// 224 = 0xe0
    NSPanel *mUnpairWarningPanel;	// 232 = 0xe8
    NSView *mUnpairWarningView;	// 240 = 0xf0
    NSTextField *mUnpairWarningText;	// 248 = 0xf8
    NSTextField *mUnpairWarningHeader;	// 256 = 0x100
    NSPanel *mPrinterPanel;	// 264 = 0x108
    NSView *mPrinterView;	// 272 = 0x110
    NSTextField *mPrinterViewText;	// 280 = 0x118
    NSTextField *mPrinterViewHeader;	// 288 = 0x120
    NSProgressIndicator *mProgressIndicator;	// 296 = 0x128
    NSButton *mRemoveSelected;	// 304 = 0x130
    NSString *mPairButton;	// 312 = 0x138
    BluetoothHIDDeviceController *_hidDeviceController;	// 320 = 0x140
    NSMutableDictionary *mPairingDeviceDict;	// 328 = 0x148
    NSMutableDictionary *mUnpairingDeviceDict;	// 336 = 0x150
    D2DProtocolManager *mProtocolManager;	// 344 = 0x158
    int mDeviceClassFilter;	// 352 = 0x160
    int mDeviceSubclassFilter;	// 356 = 0x164
    struct IOBluetoothDeviceSearchAttributes *mSearchAttributes;	// 360 = 0x168
    id <D2DInquiry> mInquiry;	// 368 = 0x170
    BOOL mNoInquiryCache;	// 376 = 0x178
    int mInquiryCacheTimeout;	// 380 = 0x17c
    BOOL mBluetoothPowerOn;	// 384 = 0x180
    int mPairedDeviceCount;	// 388 = 0x184
    NSArray *mTopLevelObjects;	// 392 = 0x188
    NSTrackingArea *mDeviceTableTrackingArea;	// 400 = 0x190
    NSMutableDictionary *mDevicesGroupDict;	// 408 = 0x198
    NSImage *mAlertImage;	// 416 = 0x1a0
    NSImage *mPrefPane;	// 424 = 0x1a8
    NSImageView *mPrefIcon;	// 432 = 0x1b0
    BOOL mPairing;	// 440 = 0x1b8
    BOOL mSearching;	// 441 = 0x1b9
    int mInternalStopped;	// 444 = 0x1bc
    BOOL mStopped;	// 448 = 0x1c0
    BOOL mBackGround;	// 449 = 0x1c1
    BOOL mSimplePairingReceived;	// 450 = 0x1c2
    BOOL mDoubleClickNotify;	// 451 = 0x1c3
    BOOL mPerformingRename;	// 452 = 0x1c4
    BOOL mUpdateBattery;	// 453 = 0x1c5
    BOOL mMenuOpen;	// 454 = 0x1c6
    NSMutableArray *mDeviceArrayTmp;	// 456 = 0x1c8
}

+ (id)listViewForDevicesOfAttributes:(struct IOBluetoothDeviceSearchAttributes *)arg1;	// IMP=0x000000000000ef03
+ (id)listViewForDevicesOfClass:(int)arg1 subclass:(int)arg2;	// IMP=0x000000000000ee3d
@property BOOL backGround; // @synthesize backGround=mBackGround;
@property NSString *pairButton; // @synthesize pairButton=mPairButton;
@property NSImage *prefPaneIcon; // @synthesize prefPaneIcon=mPrefPane;
@property BOOL bluetoothPowerOn; // @synthesize bluetoothPowerOn=mBluetoothPowerOn;
@property BOOL stopped; // @synthesize stopped=mStopped;
@property int internalStopped; // @synthesize internalStopped=mInternalStopped;
@property BOOL searching; // @synthesize searching=mSearching;
@property BOOL pairing; // @synthesize pairing=mPairing;
@property BOOL userPasscode; // @synthesize userPasscode=mUserPasscode;
@property(retain) NSMutableDictionary *unpairingDeviceDict; // @synthesize unpairingDeviceDict=mUnpairingDeviceDict;
@property(retain) NSMutableDictionary *pairingDeviceDict; // @synthesize pairingDeviceDict=mPairingDeviceDict;
@property(retain) NSMutableDictionary *devicesGroup; // @synthesize devicesGroup=mDevicesGroupDict;
@property struct IOBluetoothDeviceSearchAttributes *deviceSearchAttributes; // @synthesize deviceSearchAttributes=mSearchAttributes;
@property int deviceSubclassFilter; // @synthesize deviceSubclassFilter=mDeviceSubclassFilter;
@property int deviceClassFilter; // @synthesize deviceClassFilter=mDeviceClassFilter;
@property int inquiryCacheTimeout; // @synthesize inquiryCacheTimeout=mInquiryCacheTimeout;
@property BOOL noInquiryCache; // @synthesize noInquiryCache=mNoInquiryCache;
@property(retain) id <D2DInquiry> inquiry; // @synthesize inquiry=mInquiry;
- (void)simplePairing:(id)arg1 status:(unsigned char)arg2;	// IMP=0x00000000000153b9
- (void)batteryNotification:(id)arg1;	// IMP=0x0000000000014cf9
- (void)_updateBatteryNotification:(id)arg1 selected:(BOOL)arg2;	// IMP=0x0000000000014823
- (void)pairingComplete:(id)arg1 error:(id)arg2;	// IMP=0x0000000000013bf3
- (void)pairingUserPasskeyNotification:(id)arg1 passkey:(unsigned long long)arg2;	// IMP=0x0000000000013b39
- (void)pairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned long long)arg2;	// IMP=0x0000000000013a7f
- (void)pairingPINCodeRequest:(id)arg1;	// IMP=0x000000000001391a
- (void)pairingKeyEvent:(id)arg1 eventType:(int)arg2;	// IMP=0x00000000000138ea
- (void)pairingConnecting:(id)arg1;	// IMP=0x00000000000138ca
- (void)pairingStarted:(id)arg1;	// IMP=0x00000000000138aa
- (void)continueInquiryUpdate;	// IMP=0x00000000000134b3
- (void)inquiryComplete:(id)arg1 error:(id)arg2;	// IMP=0x0000000000012e3d
- (void)inquiry:(id)arg1 updatedDevice:(id)arg2;	// IMP=0x0000000000012dfb
- (void)updateInquiryWithDelay:(id)arg1;	// IMP=0x0000000000012a8b
- (void)inquiry:(id)arg1 foundDevice:(id)arg2;	// IMP=0x0000000000012587
- (void)inquiryStarted:(id)arg1;	// IMP=0x00000000000123f3
- (void)controlTextDidEndEditing:(id)arg1;	// IMP=0x00000000000122e9
- (void)_beginRenameForRow:(long long)arg1;	// IMP=0x0000000000012193
- (void)sendUpdateFromValueTransform:(id)arg1;	// IMP=0x0000000000011fe8
- (void)tableViewSelectionDidChange:(id)arg1;	// IMP=0x0000000000011bc0
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;	// IMP=0x0000000000011b13
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;	// IMP=0x0000000000011a6b
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;	// IMP=0x00000000000119c3
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x000000000001163c
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x000000000001160c
- (void)sendOPPAppleEventWithDevice:(id)arg1;	// IMP=0x00000000000114f6
- (void)sendOPPAppleEvent;	// IMP=0x00000000000114e2
- (void)sendFTPAppleEventWithDevice:(id)arg1;	// IMP=0x00000000000113cc
- (void)sendFTPAppleEvent;	// IMP=0x00000000000113b8
- (void)handleSendFileToDevice:(id)arg1;	// IMP=0x0000000000011382
- (void)handleBrowseDevice:(id)arg1;	// IMP=0x000000000001134c
- (void)handlePANDeviceDisconnect:(id)arg1;	// IMP=0x00000000000112fd
- (BOOL)checkActivePAN:(id)arg1;	// IMP=0x00000000000112a8
- (void)handlePANDevice:(id)arg1;	// IMP=0x0000000000011257
- (BOOL)validateMenuItem:(id)arg1;	// IMP=0x00000000000111b3
- (void)menuDidClose:(id)arg1;	// IMP=0x00000000000110e2
- (void)menuNeedsUpdate:(id)arg1;	// IMP=0x000000000001063d
- (void)_powerOff:(id)arg1;	// IMP=0x00000000000105f4
- (void)_powerOn:(id)arg1;	// IMP=0x00000000000105e3
- (void)loadView;	// IMP=0x0000000000010118
- (void)stopSearch;	// IMP=0x000000000000fe89
- (void)pauseSearch;	// IMP=0x000000000000fe3f
- (void)startSearch;	// IMP=0x000000000000fc29
- (long long)getSelectedRowCount;	// IMP=0x000000000000fc0c
- (id)getSelectedRow;	// IMP=0x000000000000fb2c
- (void)cancelGoBack:(id)arg1;	// IMP=0x000000000000fafa
- (void)continueUnpairing:(id)arg1;	// IMP=0x000000000000fab3
- (void)pairUsingOptions:(id)arg1;	// IMP=0x000000000000fa5d
- (void)pairingOptions:(id)arg1;	// IMP=0x000000000000f917
- (void)returnToTable:(id)arg1;	// IMP=0x000000000000f905
- (void)cancelUnpairing:(id)arg1;	// IMP=0x000000000000f8d3
- (void)cancelPairing:(id)arg1;	// IMP=0x000000000000f5b7
- (void)cleanAfterIncomingPairing;	// IMP=0x000000000000f365
- (void)pairUnpairSelectedDevice:(id)arg1;	// IMP=0x000000000000f06c
- (void)dealloc;	// IMP=0x000000000000efa7
- (void)mouseMoved:(id)arg1;	// IMP=0x000000000000edc4
- (void)mouseExited:(id)arg1;	// IMP=0x000000000000ed6c
- (void)mouseEntered:(id)arg1;	// IMP=0x000000000000ecf3
- (void)prefPaneBackground;	// IMP=0x000000000000ebab
- (void)_hitTestWithEvent:(id)arg1;	// IMP=0x000000000000d9c2
- (void)_updateTrackingArea;	// IMP=0x000000000000d823
- (void)_animateDisplayingTableUI;	// IMP=0x000000000000d7c0
- (void)printerAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;	// IMP=0x000000000000d6f3
- (void)_animateDisplayingPrinterUI;	// IMP=0x000000000000d420
- (void)_animateDisplayingUnpairingUI:(id)arg1;	// IMP=0x000000000000d129
- (void)pairAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;	// IMP=0x000000000000d10a
- (void)_animateDisplayingPairingUI:(id)arg1;	// IMP=0x000000000000cd65
- (void)unpairAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;	// IMP=0x000000000000cd0d
- (BOOL)_setupUnpairingUI:(id)arg1;	// IMP=0x000000000000c304
- (void)pairOptionsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;	// IMP=0x000000000000c2ac
- (void)_setupPairingOptionsUI:(id)arg1;	// IMP=0x000000000000bfc4
- (void)setDoubleClickNotify;	// IMP=0x000000000000bfb3
- (void)_tableDoubleClick:(id)arg1;	// IMP=0x000000000000bc48
- (void)_menuCancel:(id)arg1;	// IMP=0x000000000000bc34
- (void)_menuUnpair:(id)arg1;	// IMP=0x000000000000bbfe
- (void)_menuRename:(id)arg1;	// IMP=0x000000000000bb91
- (void)_menuPair:(id)arg1;	// IMP=0x000000000000bb5b
- (void)_menuDisconnect:(id)arg1;	// IMP=0x000000000000bb13
- (void)_menuConnect:(id)arg1;	// IMP=0x000000000000ba04
- (void)_restartInquiry:(id)arg1;	// IMP=0x000000000000b93e
- (void)_resumeInquiry;	// IMP=0x000000000000b86a
- (void)_pauseInquiry;	// IMP=0x000000000000b7b4
- (void)_unpairDeviceInDictionary:(id)arg1 skipWarning:(BOOL)arg2;	// IMP=0x000000000000b68c
- (void)_unpairDeviceInDictionary:(id)arg1;	// IMP=0x000000000000b678
- (void)_pairDeviceInDictionary:(id)arg1;	// IMP=0x000000000000b051
- (void)_updatePairedDeviceCount;	// IMP=0x000000000000adfd
- (void)_updatePairedDevices:(id)arg1;	// IMP=0x000000000000a7ac
- (id)_statusString:(id)arg1;	// IMP=0x000000000000a3d3
- (void)_updatePairedDevicesDelay:(id)arg1;	// IMP=0x000000000000a273
- (void)_deviceConnectDisconnect:(id)arg1;	// IMP=0x0000000000009e2a
- (void)_loadD2DPairingNib;	// IMP=0x0000000000009bee
@property(retain) NSButton *pairUnpairButton;

@end
