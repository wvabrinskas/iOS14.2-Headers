/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate, CNPresenterDelegate;
@class UIResponder, CNPropertyGroupItem;

@interface CNPropertyCell : CNLabeledCell {

	BOOL _allowsEditing;
	BOOL _ignoreSuggested;
	BOOL _forceSuggested;
	BOOL _highlightedProperty;
	BOOL _important;
	id _property;
	UIResponder* _firstResponderItem;
	double _labelWidth;
	id<CNPropertyCellDelegate> _delegate;
	id<CNPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic,__weak) id property;                                                 //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UIResponder * firstResponderItem;                                 //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL ignoreSuggested;                                               //@synthesize ignoreSuggested=_ignoreSuggested - In the implementation block
@property (assign,nonatomic) BOOL forceSuggested;                                                //@synthesize forceSuggested=_forceSuggested - In the implementation block
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (assign,getter=isHighlightedProperty,nonatomic) BOOL highlightedProperty;              //@synthesize highlightedProperty=_highlightedProperty - In the implementation block
@property (assign,getter=isImportant,nonatomic) BOOL important;                                  //@synthesize important=_important - In the implementation block
@property (nonatomic,readonly) BOOL supportsTintColorValue; 
@property (nonatomic,readonly) BOOL supportsValueColorUsesLabelColor; 
@property (assign,nonatomic) double labelWidth;                                                  //@synthesize labelWidth=_labelWidth - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presentingDelegate;                  //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
+(id)labelStringFromAppName:(id)arg1 andPropertyLabel:(id)arg2 ;
-(void)copy:(id)arg1 ;
-(id)property;
-(void)tintColorDidChange;
-(BOOL)supportsTintColorValue;
-(void)setCardGroupItem:(id)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(void)performDefaultAction;
-(void)performAccessoryAction;
-(double)labelWidth;
-(UIResponder *)firstResponderItem;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(BOOL)isSuggested;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
-(BOOL)shouldShowSuggestionOrigin;
-(BOOL)ignoreSuggested;
-(BOOL)supportsValueColorUsesLabelColor;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setIgnoreSuggested:(BOOL)arg1 ;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(BOOL)forceSuggested;
-(void)setForceSuggested:(BOOL)arg1 ;
-(BOOL)isImportant;
-(BOOL)isHighlightedProperty;
-(void)setHighlightedProperty:(BOOL)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
-(void)setLabelWidth:(double)arg1 ;
-(void)setProperty:(id)arg1 ;
-(id<CNPresenterDelegate>)presentingDelegate;
-(BOOL)allowsEditing;
-(id)valueString;
-(id)labelString;
-(void)setAllowsEditing:(BOOL)arg1 ;
@end

