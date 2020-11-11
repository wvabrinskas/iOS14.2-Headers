/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SGListDelegate;
@class NSMutableArray;

@interface SGList : NSObject {

	id<SGListDelegate> _delegate;
	/*^block*/id _comparator;
	NSMutableArray* _array;

}

@property (nonatomic,retain) NSMutableArray * array;                          //@synthesize array=_array - In the implementation block
@property (assign,nonatomic,__weak) id<SGListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id comparator;                                     //@synthesize comparator=_comparator - In the implementation block
-(BOOL)addItem:(id)arg1 ;
-(NSMutableArray *)array;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)comparator;
-(id)init;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id<SGListDelegate>)delegate;
-(void)setComparator:(id)arg1 ;
-(unsigned long long)count;
-(void)setDelegate:(id<SGListDelegate>)arg1 ;
-(void)removeAllItems;
-(BOOL)removeItem:(id)arg1 ;
-(id)items;
-(void)setArray:(NSMutableArray *)arg1 ;
@end
