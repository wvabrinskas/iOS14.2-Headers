/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewController.h>

@protocol CACCorrectionsCollectionViewControllerDelegate;
@class NSString, NSArray;

@interface CACCorrectionsCollectionViewController : UICollectionViewController {

	id<CACCorrectionsCollectionViewControllerDelegate> _delegate;
	NSString* _text;
	NSArray* _alternatives;
	NSArray* _emojis;

}

@property (assign,nonatomic,__weak) id<CACCorrectionsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * alternatives;                                                            //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSArray * emojis;                                                                  //@synthesize emojis=_emojis - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)init;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<CACCorrectionsCollectionViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)text;
-(void)setDelegate:(id<CACCorrectionsCollectionViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(NSArray *)emojis;
-(NSArray *)alternatives;
-(void)setAlternatives:(NSArray *)arg1 ;
-(void)setEmojis:(NSArray *)arg1 ;
-(void)_didTapCancel:(id)arg1 ;
-(id)_itemsInSection:(long long)arg1 ;
@end

