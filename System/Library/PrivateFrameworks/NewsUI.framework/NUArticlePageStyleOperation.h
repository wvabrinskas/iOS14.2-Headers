/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@class FCArticle, NUPageStyle;

@interface NUArticlePageStyleOperation : FCOperation {

	FCArticle* _article;
	unsigned long long _pageNextAction;
	/*^block*/id _completion;
	NUPageStyle* _pageStyle;

}

@property (nonatomic,readonly) FCArticle * article;                            //@synthesize article=_article - In the implementation block
@property (nonatomic,readonly) unsigned long long pageNextAction;              //@synthesize pageNextAction=_pageNextAction - In the implementation block
@property (nonatomic,readonly) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                          //@synthesize pageStyle=_pageStyle - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(FCArticle *)article;
-(id)completion;
-(void)operationDidFinishWithError:(id)arg1 ;
-(NUPageStyle *)pageStyle;
-(unsigned long long)pageNextAction;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(id)initWithArticle:(id)arg1 pageNextAction:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end
