import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { Exercise8Page } from './exercise8.page';

const routes: Routes = [
  {
    path: '',
    component: Exercise8Page
  }
];

@NgModule({
  imports: [RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class Exercise8PageRoutingModule {}
