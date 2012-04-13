//
//  GVCUIViewController.m
//
//  Created by David Aspinall on 10-04-05.
//  Copyright 2010 Global Village Consulting Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface GVCUIViewController : UIViewController

@property (nonatomic, assign) UIBarStyle navigationBarStyle;
@property (nonatomic, retain) UIColor *navigationBarTintColor;
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;	

@property (nonatomic, readonly) BOOL hasViewAppeared;
@property (nonatomic, readonly) BOOL isViewAppearing;

@property (nonatomic, assign) BOOL autoresizesForKeyboard;

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id callbackDelegate;

- (UINavigationBar *)navigationBar;
- (NSString *)viewTitleKey;

#pragma mark -

/* Keyboard notifications */
-(void) resizeForKeyboard:(NSNotification *)notification appearing:(BOOL)appearing;

-(void) keyboardWillAppear:(BOOL)animated withBounds:(CGRect)bounds;
-(void) keyboardWillAppear:(BOOL)animated withBounds:(CGRect)bounds animationDuration:(NSTimeInterval)aDuration;

-(void) keyboardWillDisappear:(BOOL)animated withBounds:(CGRect)bounds;
-(void) keyboardWillDisappear:(BOOL)animated withBounds:(CGRect)bounds animationDuration:(NSTimeInterval)aDuration;

-(void) keyboardDidAppear:(BOOL)animated withBounds:(CGRect)bounds;
-(void) keyboardDidDisappear:(BOOL)animated withBounds:(CGRect)bounds;

@end
