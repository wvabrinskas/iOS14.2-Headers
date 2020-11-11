/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class CNContactPickerViewController, NSArray, NSPredicate, NSString;

@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate> {

	void* _addressBook;
	id _peoplePickerDelegate;
	CNContactPickerViewController* _contactPicker;
	BOOL _ignoreViewWillBePresented;
	NSArray* _displayedProperties;
	NSPredicate* _predicateForEnablingPerson;
	NSPredicate* _predicateForSelectionOfPerson;
	NSPredicate* _predicateForSelectionOfProperty;

}

@property (assign,nonatomic) id<ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate;              //@synthesize peoplePickerDelegate=_peoplePickerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                                      //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) const void* addressBook; 
@property (nonatomic,copy) NSPredicate * predicateForEnablingPerson;                                           //@synthesize predicateForEnablingPerson=_predicateForEnablingPerson - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfPerson;                                        //@synthesize predicateForSelectionOfPerson=_predicateForSelectionOfPerson - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                                      //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAddressBook:(const void*)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_allowsAutorotation;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)contactStore;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)_endDelayingPresentation;
-(NSArray *)displayedProperties;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(const void*)addressBook;
-(void)setupViewControllers;
-(BOOL)_isDelayingPresentation;
-(void)_viewWillBePresented;
-(id)displayedPropertyKeys;
-(NSPredicate *)predicateForSelectionOfProperty;
-(void)dealloc;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(id)contactPickerPresentedViewController:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(NSPredicate *)predicateForEnablingPerson;
-(NSPredicate *)predicateForSelectionOfPerson;
-(BOOL)_shouldPreventCancelButtonsFromShowing;
-(void)_setViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id<ABPeoplePickerNavigationControllerDelegate>)peoplePickerDelegate;
-(void)setPeoplePickerDelegate:(id<ABPeoplePickerNavigationControllerDelegate>)arg1 ;
-(void)setPredicateForEnablingPerson:(NSPredicate *)arg1 ;
-(void)setPredicateForSelectionOfPerson:(NSPredicate *)arg1 ;
@end
