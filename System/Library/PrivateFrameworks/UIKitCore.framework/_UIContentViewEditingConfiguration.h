/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIContentViewEditingConfiguration : NSObject <NSCopying> {

	BOOL _useTextInputAsLabel;
	BOOL _selectAllTextWhenEditingBegins;
	/*^block*/id _didEndHandler;
	/*^block*/id _shouldBeginHandler;
	/*^block*/id _shouldChangeHandler;
	/*^block*/id _shouldEndHandler;

}

@property (assign,nonatomic) BOOL useTextInputAsLabel;                         //@synthesize useTextInputAsLabel=_useTextInputAsLabel - In the implementation block
@property (assign,nonatomic) BOOL selectAllTextWhenEditingBegins;              //@synthesize selectAllTextWhenEditingBegins=_selectAllTextWhenEditingBegins - In the implementation block
@property (nonatomic,copy,readonly) id didEndHandler;                          //@synthesize didEndHandler=_didEndHandler - In the implementation block
@property (nonatomic,copy) id shouldBeginHandler;                              //@synthesize shouldBeginHandler=_shouldBeginHandler - In the implementation block
@property (nonatomic,copy) id shouldChangeHandler;                             //@synthesize shouldChangeHandler=_shouldChangeHandler - In the implementation block
@property (nonatomic,copy) id shouldEndHandler;                                //@synthesize shouldEndHandler=_shouldEndHandler - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDidEndHandler:(/*^block*/id)arg1 ;
-(void)setUseTextInputAsLabel:(BOOL)arg1 ;
-(void)setSelectAllTextWhenEditingBegins:(BOOL)arg1 ;
-(void)setShouldBeginHandler:(id)arg1 ;
-(void)setShouldChangeHandler:(id)arg1 ;
-(void)setShouldEndHandler:(id)arg1 ;
-(id)didEndHandler;
-(id)shouldChangeHandler;
-(id)shouldBeginHandler;
-(BOOL)useTextInputAsLabel;
-(id)shouldEndHandler;
-(BOOL)selectAllTextWhenEditingBegins;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

